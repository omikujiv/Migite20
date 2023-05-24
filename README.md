# Migite20
DIY Keyboard that has 21 key and 3 encoder, for Right hand 

## 左利きユーザ向けの右手デバイス。  
## お絵かき用途などに。

## 驚異のロータリーエンコーダー3積で、様々な直観的な操作に対応。  
## ロータリーエンコーダは親指や人差し指での操作を想定。  
![IMGP3940](https://github.com/omikujiv/Migite20/assets/128278435/95e25fc7-f766-49bf-a8fe-ef074c9fde21)
![IMGP3948](https://github.com/omikujiv/Migite20/assets/128278435/041b2331-7462-4350-ae94-2e8182f58e68)
# 仕様/キーマップ
ハードウェア上では、次のようにキーが浅いんされている。
この時、Zはロータリーエンコーダの押し込みボタンである。
（つまみが平たい円の物）

                ┌───┬───┬───┐  
                │ 2 │ 3 │ 4 │  
            ┌───┼───┼───┼───┤  
            │ 1 │ 6 │ 7 │ 8 │  
            ├───┼───┼───┤───│  
            │ 5 │ 0 │ A │ B │  
            ├───┼───┼───┼───┤  
            │ 9 │ D │ E │ F │  
    ┌───┐   ├───┼───┼───┤───┤  
    │ Z │   │ C | H │ I │ J │  
    └───┘   ├───┴───┴───┴───┘  
            │ G │
            └───┘

ソフトウェア上では、次のようなキーマトリクスとして処理されている。

    ┌───┬───┬───┬───┐  
    │ 1 │ 2 │ 3 │ 4 │  
    ├───┼───┼───┼───┤  
    │ 5 │ 6 │ 7 │ 8 │  
    ├───┼───┼───┤───│  
    │ 9 │ 0 │ A │ B │  
    ├───┼───┼───┼───┤  
    │ C │ D │ E │ F │  
    ├───┼───┼───┤───┼───┐  
    │ G | H │ I │ J │ Z │  
    └───┴───┴───┴───┴───┘  

ロータリエンコーダは任意角度回転時にキーが1回入力される。  
回し続けると連続入力される。

# 回路/配線
回路はキースイッチ対応箇所が $4\times 5$のキーマトリクス

ロータリーエンコーダは1つにつき2つの信号線と、1つのグランド  
ロータリーエンコーダのスイッチは行の配線はマトリクスから拝借（拡張）、列のは単独でピンを設定

ここまでの信号ピンの合計


$キーマトリクス: 4 + 5=9$ 

$ロータリエンコーダ： 2 \times 3=6 $

$ロータリエンコーダのスイッチ：1$

$合計：16 ピン$


promicroは18ピンくらいまで信号を扱えるので、ピン数は結構ギリギリとなっている。

実際の配線は漢のジャンパワイヤによる空中配線
![IMGP3945](https://github.com/omikujiv/Migite20/assets/128278435/5d9f42a7-4e8e-40f7-b8ed-a07b2326f486)

# 筐体/ハードウェア
- 白いメイン部分 & エンコーダつまみ：3Dプリンタ(FDM)
- マウスホイール型エンコーダつまみ：100均マウスから拝借
- 底面透明部：アクリル板(1.8mm)をはんだごてで切り出し
- キースイッチ：Kailh Box V2 Switch / Red / Linear
    - https://shop.yushakobo.jp/products/4264
- キーキャップ：Doys A Kit (Warm white)
    - https://shop.yushakobo.jp/products/6918
- 底面滑り止め：100均滑り止めシート

# 筐体データ説明 in 3Dprint_data
- ## migite_ob1.stl  
    キーキャップを差し込むパーツ  
    印刷の都合で裏表が反対
![image](https://github.com/omikujiv/Migite20/assets/128278435/5f258630-d97d-41f7-a825-a1e3dfabfa11)

- ## migite_part.stl
    ロータリーエンコーダや回路を配置するパーツ  
    印刷の都合で裏表が反対
![image](https://github.com/omikujiv/Migite20/assets/128278435/1a188f33-52d9-4dbb-b32d-b868196535d1)

- ## migite_bla.stl
    1枚目のユニバーサル基板と2枚目のユニバーサル基板をつなぐブラケットパーツ  
    四方を囲むとマウス型のロータリーエンコーダと干渉する  
![image](https://github.com/omikujiv/Migite20/assets/128278435/8c0b90d7-57c4-4bab-ad74-bd34d3e1a513)

- ## migite_NOBUlong.stl  
    背の高いノブ  
    歯車ツールを利用して作成  
![image](https://github.com/omikujiv/Migite20/assets/128278435/f846a0bd-2b24-463a-b97b-56b3c336d670)

- ## migite_nobu.stl 
    広い方のノブ   
![image](https://github.com/omikujiv/Migite20/assets/128278435/f12a1987-8187-4297-86bb-ea4d6ba09712)