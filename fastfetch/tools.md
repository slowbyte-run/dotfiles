## imagemagick

可以将图片背景变为透明

magick ~/.config/fastfetch/logo.png -fuzz 5% -transparent white ~/.config/fastfetch/logo.png

- -fuzz 5% ：允许 5% 颜色误差，防止边缘白边残留。
- -transparent white ：把所有接近白色的像素变透明。

检验是否透明：
file ~/.config/fastfetch/logo.png

如果看到 RGDA 说明就有透明通道了
