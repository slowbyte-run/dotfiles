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
```
