# git(1)

# branch + merge workflow
  git checkout -b 'new feature'
  vim index.html
  git commit -am 'fixed problem'
  git checkout master
  git merge hotfix

# fer una nova branca
  git checkout -b newBranch

# veure diferencies amb arxiu actual i ultima versio (abans de fer git add)
  git diff arxiu

# veure diferencies amb arxiu ja afegit per commit (després de fer git add)
  git diff --cached arxiu
