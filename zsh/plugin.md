必装

- `git`	命令简写
- `sudo`	连按两下esc可以自动补全sudo
- `z`	快速跳转目录
- `extract`	万能解压
- `docker`
- `docker-compose`

其他

- `zsh-autosuggestions`
- `zsh-syntax-highlighting`

- `fzf`	模糊搜索
- `history-substring-search`	历史命令增强

`oh-my-zsh`自带插件

```zsh
plugins=(
  git
  sudo
  z
  extract
  docker
  docker-compose
)
```

如何使用

git
```bash
gst     # git status
gaa     # git add .
gcm     # git commit -m
gl      # git pull
gp      # git push
```

sudo
```bash
apt update
# 忘了加 sudo？
# 按 ESC 两下
sudo apt update
```

z
```bash
cd ~/dev/project-a
cd ~/dev/project-b

z project-a   # 秒回
```

extract
```bash
x archive.tar.gz
x test.zip
```

外部插件

zsh-autosuggestions（命令自动提示）
```bash
git clone https://github.com/zsh-users/zsh-autosuggestions \
  ${ZSH_CUSTOM:-~/.oh-my-zsh/custom}/plugins/zsh-autosuggestions

# 启用：在.zshrc的plugins添加zsh-autosuggestions
```

zsh-syntax-highlighting（语法高亮）
```bash
git clone https://github.com/zsh-users/zsh-syntax-highlighting \
  ${ZSH_CUSTOM:-~/.oh-my-zsh/custom}/plugins/zsh-syntax-highlighting

# 启用：在.zshrc的plugins的最后添加zsh-syntax-highlighting
```


fzf（模糊搜索神器，进阶但很值）
```bash
sudo apt install -y fzf
# 或者
git clone --depth 1 https://github.com/junegunn/fzf.git ~/.fzf
~/.fzf/install
```
使用：
ctrl+r	模糊搜索历史
ctrl+t	搜索当前目录文件
alt+c	搜索目录并cd


history-substring-search（历史命令增强）
```bash
git clone https://github.com/zsh-users/zsh-history-substring-search \
  ${ZSH_CUSTOM:-~/.oh-my-zsh/custom}/plugins/zsh-history-substring-search
# 启用：在.zshrc的plugin添加history-substring-search
```
推荐绑定键位（↑↓）
在 ~/.zshrc 加：
```zsh
bindkey '^[[A' history-substring-search-up
bindkey '^[[B' history-substring-search-down
```



完整推荐

```zsh
plugins=(
  git
  sudo
  z
  extract
  docker
  docker-compose
  zsh-autosuggestions
  zsh-syntax-highlighting
  history-substring-search
)
```


其他推荐
- batcat
- 
