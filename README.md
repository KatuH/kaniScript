# kaniScript
Script language for Katuh Adventure Novel Interpreter  
アドベンチャーゲームやノベルゲームに分類されるゲーム向けのスクリプト言語

## ソリューションの構成

### ライブラリ
以下のディレクトリは言語を使用するプロジェクトから参照します。

#### include ディレクトリ
公開API用のディレクトリ
#### Debug,Relese ディレクトリ
ライブラリ等のディレクトリ

### ソースコード
以下のディレクトリは言語とツールのソースコードになります。

#### scriptCore ディレクトリ
インタープリタのプロジェクト
#### ksmgr ディレクトリ
コマンドラインツールのプロジェクト

### その他
#### doc ディレクトリ
多分そのうち書く

## チュートリアル
ソースコードを展開後、プログラムにスクリプトを組み込むまでの手順です。

### スクリプトの組み込み
1. ソリューションを Release 構成でビルド
    * `kaniScript.sln`をVisualStudioで開いてビルド
    * `MsBuild kaniScript.sln /t:build /p:Configuration=Release`
1. ライブラリを使用するプロジェクトに追加
   1. インクルードバスに`include`ディレクトリを追加
   1. ライブラリパスに`Release`ディレクトリを追加
   1. リンカーライブラリ入力に`scriptCore.lib`を追加
1. プログラムにライブラリを追加
   1. ソースコードに'#include "kaniScript.h"'を追加

### スクリプトの実行
1. hoge

## スクリプトリファレンス
```
        地の文
人名     発言
```
work in progress...

## 組み込みAPIリファレンス
work in progress...
