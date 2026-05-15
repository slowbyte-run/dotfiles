
https://github.com/SHORiN-KiWATA/Shorin-ArchLinux-Guide/wiki/%E5%AE%89%E8%A3%85Niri

## 安装

```zsh
**sudo pacman -S niri xwayland-satellite xdg-desktop-portal-gnome fuzzel alacritty
```

- `xwayland-satellite`: 提供xwayland功能，xwayland是在wayland上运行x11软件的兼容环境
- `xdg-desktop-portal-gnome`: 是niri推荐使用的桌面门户，提供文件选择、屏幕分享等功能；
- `fuzzel`: niri 默认程序启动器，可替换 rofi(需自行配置)
- `alacritty`：niri 默认终端模拟器

安装完之后启动 niri-session
- 如果之前有桌面环境的话，注销当前会话，在登录页面（如sddm）选择 niri 启动
- 否则 `niri-session` 进入 niri 会话

## 更改终端模拟器

更改 `niri` 配置文件：
```zsh
vim ~/.config/niri/config.kdl
```

搜索 `alacritty` 或者 `terminal`

## 显示器相关配置

- 多显示器配置

## 关闭鼠标加速

## 通知管理

## 语言和输入法管理

## 文档管理器

- nautilus
- thunar

## 锁屏熄屏睡眠管理

- swaylock
- swayidle

快捷键： Super + Alt + L

## 蓝牙管理

## 剪贴板

## 截图配置

- niri 自带截图
- 编辑截图 satty

快捷键：
- Print: 区域截图
- Ctrl+Print: 全屏截图
- Alt+Print: 窗口截图
- Alt+Shift+C: 编辑截图

## 窗口切换

niri 自带

## 快捷键亮度调节

## 壁纸切换

- awww
- waypaper

## 任务栏配置

- waybar
- 
