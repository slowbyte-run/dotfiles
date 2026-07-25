# Quick Start

```bash
sudo pacman -S rofi

# 生成配置文件
mkdir -p ~/.config/rofi
rofi -dump-config > ~/.config/rofi/config.rasi
```

编辑`config.rasi`，将以下部分取消配置

```rasi
configuration {
	modes: "window,drun,run,ssh";
	font: "JetBrains Mono 12";
	icon-theme: "candy-icons";
	combi-modes: "window,run,drun";
}
```

主题配置，以选择 `round-nord-dark` 为例

```bash
git clone https://github.com/lr-tech/rofi-themes-collection.git
cd rofi-themes-collection
mkdir -p ~/.local/share/rofi/themes/
cp -r themes/* ~/.local/share/rofi/themes/
```

最后运行 `rofi-theme-selector` 进行选择需要的主题

配置快捷键：命令设置为 `rofi -show drun`，也可将 rofi.desktop 启动执行命令也进行修改
