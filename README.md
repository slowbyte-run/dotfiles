# slowbyte's dotfiles

Arch Linux + niri/dms-shell desktop dotfiles. Modular configs, ready to deploy.

![Desktop Screenshot 1](assets/images/Screenshot%20from%202026-07-25%2015-11-30.png)

![Desktop Screenshot 2](assets/images/Screenshot%20from%202026-07-25%2015-19-15.png)


## How to use

```bash
git clone https://github.com/slowbyte-run/dotfiles.git ~/Projects/dotfiles

# niri
ln -sf ~/Projects/dotfiles/niri-dms/niri ~/.config/niri

# kitty
ln -sf ~/Projects/dotfiles/kitty ~/.config/kitty

# zsh
ln -sf ~/Projects/dotfiles/zsh/.zshrc ~/.zshrc

# starship
ln -sf ~/Projects/dotfiles/starship/starship_arch.toml ~/.config/starship.toml

# fastfetch
ln -sf ~/Projects/dotfiles/fastfetch ~/.config/fastfetch

# btop
ln -sf ~/Projects/dotfiles/btop ~/.config/btop

# logid
sudo ln -sf ~/Projects/dotfiles/logid/logid.cfg /etc/logid.cfg

# nvim
ln -sf ~/Projects/dotfiles/nvim ~/.config/nvim

# fcitx5
ln -sf ~/Projects/dotfiles/fcitx5 ~/.config/fcitx5

# git
ln -sf ~/Projects/dotfiles/git/.gitconfig ~/.gitconfig

# gtk / qt / kde 主题
ln -sf ~/Projects/dotfiles/gtk/gtk-3.0/settings.ini ~/.config/gtk-3.0/settings.ini
ln -sf ~/Projects/dotfiles/gtk/gtk-4.0/settings.ini ~/.config/gtk-4.0/settings.ini
ln -sf ~/Projects/dotfiles/qt/qt5ct ~/.config/qt5ct
ln -sf ~/Projects/dotfiles/qt/qt6ct ~/.config/qt6ct
ln -sf ~/Projects/dotfiles/kde/kdeglobals ~/.config/kdeglobals
```

## DMS 自动生成的文件

以下文件由 DankMaterialShell（DMS）根据当前主题/设置自动生成，文件头也标了 `DO NOT EDIT`。
仓库里保存的只是某一时刻的快照，实际以 `~/.config` 下的版本为准，DMS 随时会重写：

| 文件 | 说明 |
| --- | --- |
| `niri-dms/niri/dms/colors.kdl` | 跟随 DMS 配色（当前 Catppuccin Mocha） |
| `niri-dms/niri/dms/layout.kdl` | 布局间距等 |
| `niri-dms/niri/dms/cursor.kdl` | 光标主题 |
| `niri-dms/niri/dms/windowrules.kdl` | DMS 窗口规则 |
| `niri-dms/niri/dms/input.kdl` | 鼠标/触控板 |
| `niri-dms/niri/dms/binds-next.kdl` | DMS 补写的键位 |
| `kitty/dank-theme.conf` `kitty/dank-tabs.conf` | 由 DMS 主题着色 |

想改主题请改 DMS 设置，不要直接编辑上面这些文件；下次同步时它们会被覆盖。

可以放心手写的是 `niri-dms/niri/config.kdl`、`niri-dms/niri/dms/binds.kdl`、`kitty/kitty.conf`。

## 同步

本机装的是实体副本而非软链接，改动不会自动回流到仓库。同步时按模块比对后 `cp` 回去，
注意排除 `*.bak`、`*.backup*`、`*.dmsbackup` 这类备份文件。
