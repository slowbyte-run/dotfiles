// /usr/local/include/macro.hpp

#pragma once
#include<bits/stdc++.h>
using namespace std;

#define dbg(a, i) cout << #a << '[' << i << "]=" << a[i] << " ###\n"

template<typename T>
void print_val(const T &t) {
    std::cout << t;
}

template<typename T>
void print_stl(const std::vector<T>& v) {
    std::cout << "{ ";
    for (size_t i = 0; i < v.size(); ++i) {
        print_val(v[i]);
        if (i != v.size() - 1) std::cout << ", ";
    }
    std::cout << " }" << '\n';
}

template<typename T>
void print_stl(const std::set<T>& st) {
    std::cout << "{ ";
    for (auto it = st.begin(); it != st.end(); ++it) {
        if(it != st.begin()) std::cout << ", ";
        print_val(*it);
    }
    std::cout << " }" << '\n';
}

template<typename T>
void print_stl(const std::multiset<T>& st) {
    std::cout << "{ ";
    for (auto it = st.begin(); it != st.end(); ++it) {
        if(it != st.begin()) std::cout << ", ";
        print_val(*it);
    }
    std::cout << " }" << '\n';
}

template<typename T>
void print_stl(const std::unordered_set<T>& ust) {
    std::cout << "{ ";
    for (auto it = ust.begin(); it != ust.end(); ++it) {
        if(it != ust.begin()) std::cout << ", ";
        print_val(*it);
    }
    std::cout << " }" << '\n';
}

template<typename T1, typename T2>
void print_stl(const std::pair<T1, T2>& p) {
    std::cout << "( ";
    print_val(p.first);
    std::cout << ", ";
    print_val(p.second);
    std::cout << " )";
    std::cout << '\n';
}

template<typename T>
void print_stl(const std::queue<T>& q) {
    std::queue<T> t(q);
    std::cout << "{ ";
    while(!t.empty()) {
        if(t.size() != q.size()) std::cout << ", ";
        print_val(t.front());
        t.pop();
    }
    std::cout << " }";
    std::cout << '\n';
}

template<typename T, typename Container = std::vector<T>, typename Compare = std::less<typename Container::value_type>>
void print_stl(const std::priority_queue<T, Container, Compare>& pq) {
    std::priority_queue<T, Container, Compare> t(pq);
    std::cout << "{ ";
    while(!t.empty()) {
        if(t.size() != pq.size()) std::cout << ", ";
        print_val(t.top());
        t.pop();
    }
    std::cout << " }";
    std::cout << '\n';
}

template<typename T>
void print_stl(const std::stack<T>& stk) {
    std::stack<T> t(stk);
    std::cout << "{ ";
    while(!t.empty()) {
        if(t.size() != stk.size()) std::cout << ", ";
        print_val(t.top());
        t.pop();
    }
    std::cout << " }";
    std::cout << '\n';
}

template<typename T>
void print_value(const T &t) {
    std::cout << t << " ###\n";
}

// 统一的输出函数
template<typename T>
void print_item(const T& item) {
    if constexpr (std::is_arithmetic_v<T> || std::is_same_v<T, std::string>) {
        print_value(item);
    } else {
        print_stl(item);
    }
}

// 可变参数递归展开
void debug_out() { 
    // std::cout << '\n';
}

template<typename Head, typename... Tail>
void debug_out(const Head& head, const Tail&... tail) {
    print_item(head);
    if (sizeof...(tail)) std::cout << ", ";
    debug_out(tail...);
}

// print宏 - 支持数值类型和STL容器
#define print(...) do { \
    std::cout << #__VA_ARGS__ << " = "; \
    debug_out(__VA_ARGS__); \
} while (0)

// 其他调试宏
#ifndef NDEBUG
    #define dbg_multi(...) do { \
        std::cout << "[DEBUG:" << __LINE__ << "] "; \
        debug_out(__VA_ARGS__); \
    } while (0)
#else
    #define dbg_multi(...) do {} while (0)
#endif

#define print_label(label, ...) do { \
    std::cout << "[" << label << "] " << #__VA_ARGS__ << " = "; \
    debug_out(__VA_ARGS__); \
} while (0)
