# Digispark-ATtiny85-BADUSB

## Trick or Treat!  
これはハロウィン用途のドッキリ用デバイスであり，使用者のデバイスを犯すものではありません．  
他人のデバイスに使用する際は事前に確認を取りましょう．  

## BADUSB とは
悪意の第三者により，USBデバイスのファームウェアを[悪性USBデバイス](https://www.jstage.jst.go.jp/article/nictkenkyuhoukoku/62/2/62_119/_article/-char/ja/)へと書き換えられることで，情報の横取りや改ざん，意図しない動作を引き起こすデバイスである．  

これはBADUSBのデモを行うプログラムです．  
HID準拠のマイコンであるATtiny85を用いて自動入力を行います．  

https://github.com/user-attachments/assets/715bd048-8efa-497d-9f91-e7a0de4e47e0

# 使い方

clone後，PlatformIOを用いてdigispark(ATtiny85)に書き込み．  
[ブートローダが書き換えられている](https://qiita.com/nak435/items/67aca33ca49b6f328faa)ため，A0-GNDをつなぎ書き込みを行う．

# 動作確認
windows11 Pro 25H2
VisualStudioCode version 1.106
PlatformIO Core 6.1.18 Home 3.4.4  
digispark 互換品
