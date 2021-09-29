# README for Windows environment

Last update: Wed Sep 29 09:14:15 JST 2021

POSIX環境で生成したシンボリックリンクは Windows 環境では追えないらしい．

Windows環境では，シンボリックリンクを Windows の mklink コマンドで作り直す必要がある．
mklink コマンドは PowerShell の管理者権限で実行するのが最善．

こうして作成した新たなシンボリックリンクは WSL や他の POSIX 環境からは，これまで同様普通のシンボリックリンクとして認識され普通にアクセスできる．

同梱の createSymLink4winFS.sh コマンドは上記目的に即した Windows バッチファイルを標準出力に出力するので，POSIX環境で実行してバッチファイルとして保存し，これを管理者権限の PowerShell で実行すれば手軽にシンボリックリンクを再作成できる

