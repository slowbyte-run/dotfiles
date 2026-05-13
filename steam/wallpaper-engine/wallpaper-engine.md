
1. 下载 steam
```bash
sudo pacman -S steam
steam
```

2. 启动 steam,并安装 wallpaper-engine
3. 检查 wallpapaer-engine 安装位置是否在下列其中

```bash
~/.steam/steam/steamapps/common
~/.local/share/Steam/steamapps/common
~/.var/app/com.valvesoftware.Steam/.local/share/Steam/steamapps/common
~/snap/steam/common/.local/share/Steam/steamapps/common
```

4. 下载 linux-wallpaperengine-git

```bash
paru -S linux-wallpaperengine-git
```

仓库地址： https://github.com/Almamu/linux-wallpaperengine

5. usage

```bash
linux-wallpaperengine [options] <background_id or path>
```

使用示例

```bash
linux-wallpaperengine 1845706469

linux-wallpaperengine ~/backgrounds/1845706469/

linux-wallpaperengine --fps 30 1845706469

linux-wallpaperengine \
  --scaling stretch --screen-root eDP-1 --bg 2667198601 \
  --scaling fill --screen-root HDMI-1 --bg 2667198602
```

6. 安装 GUI

```bash
paru -S simple-linux-wallpaperengine-gui-git
```

