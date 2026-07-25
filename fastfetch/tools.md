## imagemagick

此工具可以将图片背景变为透明

```bash
sudo pacman -S imagemagick
magick ~/.config/fastfetch/logo.png -fuzz 5% -transparent white ~/.config/fastfetch/logo.png
```

- -fuzz 5% ：允许 5% 颜色误差，防止边缘白边残留。
- -transparent white ：把所有接近白色的像素变透明。

检验是否透明：

```bash
file ~/.config/fastfetch/logo.png
```

如果输出能看到 RGBA 而不是 RGB 说明已经有透明通道了