done.
'mysql' (9.4.0) was installed successfully!
Notes
-----
Run 'mysqld --standalone' or 'mysqld --console' to start the Database,
or run following command as administrator to register MySQL as a service. See:
https://dev.mysql.com/doc/refman/en/windows-start-service.html

mysqld --install MySQL --defaults-file="D:\Scoop\apps\mysql\current\my.ini"

To stop and/or delete the Service run 'sc stop MySQL' and 'sc delete MySQL'.
'mysql' suggests installing 'mysql-shell'.
'mysql' suggests installing 'extras/vcredist2022'.


1. web storage
    1. localstorage，可持久化存储数据，手动清除
    2. sessionstorage，会话级别，关闭即清除
    3. 容量小，键值对，同步
    4. 主题、语言
2. indexedDB，容量大，存储结构化数据，可以支持事务、索引、查询，异步
3. appcache
    1. manifest属性
    2. .appcache文件
        1.cache, 是离线清单，列出了离线缓存的资源
        2. network，需要联网才能加载的文件
        3. fullback，offline.html，缓存失败显示的html
4. service worker + cache storage
    1. 拦截网络请求和缓存资源
    2. 拦截网络请求 -- 判断是否有缓存 -- 没有则从网络获取数据并缓存
