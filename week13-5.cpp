///week13_5_sound
//要先安裝 sketh-Library-Manage Libraries
//找sound 下載 sound 的函示 點 Install 安裝玩
import processing.sound.*; //使用聲音的外掛
SoundFile mySound;///宣告變數 mySound 它是 SoundFile
void setup(){
  size(400, 400);
  mySound = new SoundFile(this, "Intro Song_Final.mp3");
  mySound.play();
}
void draw(){
}
