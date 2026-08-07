## ImageMagick 去白底

用 `magick` 一键把图片背景变透明（用来做 logo）：

```bash
sudo pacman -S imagemagick
magick ~/.config/fastfetch/logo.png -fuzz 5% -transparent white ~/.config/fastfetch/logo.png
```

-   `-fuzz 5%`：容忍 5% 色差，避免边缘留白边。
-   `-transparent white`：将接近白色的像素转为透明。

验证是否成功：

```bash
file ~/.config/fastfetch/logo.png
```

输出包含 **RGBA** 即表示已有透明通道（RGB 则无）。