# Git Notes
```bash
ssh-keygen -t rsa -C "Alligator_@outlook.com"
clip < ~/.ssh/github_id_rsa.pub
为git仓库配置远程仓库
git remote add gitee https://gitee.com/alligatorYE/CPP_Practice.git
git remote -v # 查看远程分支
git remote rm gitee # 移除远程分支gitee
解决[ OpenSSL SSL_read: Connection was reset, errno 10054] 办法：git config --global http.sslVerify "false"
vim esc键无法退出编辑模式，使用F5键退出编辑模式
git log --oneline --graph --all --decorate
将notes 添加到dev分支中: git checkout -p 21_8.7 notes/*.*
git push --delete origin 21_9.12
git branch -m 21_9.12 21_9.12_explicit
git push origin 21_9.12_explicit
------------------------------------------------
$ git branch -m OLD-BRANCH-NAME NEW-BRANCH-NAME
$ git fetch origin
$ git branch -u origin/NEW-BRANCH-NAME NEW-BRANCH-NAME
$ git remote set-head origin -a
$ git remote prune origin
```
```bash
 git checkout 21_9.14.friend notes/GitNotes.md
 git merge master --allow-unrelated-histories #解决unrelated histories 冲突
```

