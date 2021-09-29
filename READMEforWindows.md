# README for Windows environment

Last update: Wed Sep 29 09:14:15 JST 2021

# 注意事項

POSIX環境で生成したシンボリックリンクは Windows 環境では追えないらしい．

Windows環境では，シンボリックリンクを Windows の mklink コマンドで作り直す必要がある．
mklink コマンドは PowerShell の管理者権限で実行するのが最善．

こうして作成した新たなシンボリックリンクは WSL や他の POSIX 環境からは，これまで同様普通のシンボリックリンクとして認識され普通にアクセスできる．

同梱の createSymLink4winFS.sh コマンドは上記目的に即した Windows バッチファイルを標準出力に出力するので，POSIX環境で実行してバッチファイルとして保存し，これを管理者権限の PowerShell で実行すれば手軽にシンボリックリンクを再作成できる

# Notes in English

It seems that symbolic links created in the POSIX environment cannot be followed in the Windows environment.

In the Windows environment, you need to recreate symbolic links with the Windows mklink command. It is best to run the mklink command with PowerShell administrative privileges.

The new symbolic link created in this way will be recognized as a normal symbolic link by WSL and other POSIX environments, and can be accessed normally.

The included createSymLink4winFS.sh command outputs a Windows batch file to standard output for the above purpose, so you can easily recreate the symbolic link by executing it in a POSIX environment, saving it as a batch file, and then executing it with PowerShell with administrative privileges. You can easily recreate symbolic links by running it in a POSIX environment, saving it as a batch file, and executing it with PowerShell with administrative privileges.

