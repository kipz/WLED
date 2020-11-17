/*
 * More web UI HTML source arrays.
 * This file is auto generated, please don't make any changes manually.
 * Instead, see https://github.com/Aircoookie/WLED/wiki/Add-own-functionality#changing-web-ui
 * to find out how to easily modify the web UI source!
 */

// Autogenerated from wled00/data/style.css, do not edit!!
const char PAGE_settingsCss[] PROGMEM = R"=====(<style>body{font-family:Verdana,sans-serif;text-align:center;background:#222;color:#fff;line-height:200%;margin:0}hr{border-color:#666}button{background:#333;color:#fff;font-family:Verdana,sans-serif;border:.3ch solid #333;display:inline-block;font-size:20px;margin:8px;margin-top:12px}button.disabled,button[disabled]{color:#aaa}.helpB{text-align:left;position:absolute;width:60px}input{background:#333;color:#fff;font-family:Verdana,sans-serif;border:.5ch solid #333}input[type=number]{width:4em}select{background:#333;color:#fff;font-family:Verdana,sans-serif;border:.5ch solid #333}td{padding:2px}.d5{width:4.5em!important}</style>)=====";


// Autogenerated from wled00/data/settings.htm, do not edit!!
const char PAGE_settings[] PROGMEM = R"=====(<!DOCTYPE html><html><head><meta http-equiv="Content-Type" 
content="text/html; charset=windows-1252"><title>WLED Settings</title><style>
body{text-align:center;background:#222;height:100;margin:0}html{--h:10.45vh}button{background:#333;color:#fff;font-family:Verdana,Helvetica,sans-serif;border:.3ch solid #333;border-radius:.5em;display:inline-block;font-size:7.75vmin;line-height:1em;height:var(--h);width:95%%;margin-top:2vh}
</style><script>
function BB(){window.frameElement&&(document.getElementById("b").style.display="none",document.documentElement.style.setProperty("--h","13.86vh"))}
</script></head><body onload="BB()"><form action="/"><button type="submit" 
id="b">Back</button></form><form action="/settings/wifi"><button type="submit">
WiFi Setup</button></form><form action="/settings/leds"><button type="submit">
LED Preferences</button></form><form action="/settings/sound"><button 
type="submit">Sound Settings</button></form><form action="/settings/ui"><button 
type="submit">User Interface</button></form>%DMXMENU%<form action="/settings/sync">
<button type="submit">Sync Interfaces</button></form><form 
action="/settings/time"><button type="submit">Time & Macros</button></form><form
 action="/settings/sec"><button type="submit">Security & Updates</button></form>
</body></html>)=====";


// Autogenerated from wled00/data/settings_wifi.htm, do not edit!!
const char PAGE_settings_wifi[] PROGMEM = R"=====(<!DOCTYPE html><html><head><meta charset="utf-8"><meta name="viewport" 
content="width=500"><title>WiFi Settings</title><script>
function H(){window.open("https://github.com/atuline/WLED/wiki/Settings#wifi-settings")}function B(){window.open("/settings","_self")}function GetV() {var d=document;
%CSS%%SCSS%</head><body onload="GetV()">
<form id="form_s" name="Sf" method="post"><div class="helpB"><button 
type="button" onclick="H()">?</button></div><button type="button" onclick="B()">
Back</button><button type="submit">Save & Connect</button><hr><h2>WiFi setup
</h2><h3>Connect to existing network</h3>
Network name (SSID, empty to not connect):<br><input name="CS" maxlength="32">
<br>Network password:<br><input type="password" name="CP" maxlength="63"><br>
Static IP (leave at 0.0.0.0 for DHCP):<br><input name="I0" type="number" 
min="0" max="255" required> . <input name="I1" type="number" min="0" max="255" 
required> . <input name="I2" type="number" min="0" max="255" required> . <input 
name="I3" type="number" min="0" max="255" required><br>Static gateway:<br><input
 name="G0" type="number" min="0" max="255" required> . <input name="G1" 
type="number" min="0" max="255" required> . <input name="G2" type="number" 
min="0" max="255" required> . <input name="G3" type="number" min="0" max="255" 
required><br>Static subnet mask:<br><input name="S0" type="number" min="0" 
max="255" required> . <input name="S1" type="number" min="0" max="255" required>
 . <input name="S2" type="number" min="0" max="255" required> . <input 
name="S3" type="number" min="0" max="255" required><br>
mDNS address (leave empty for no mDNS):<br>http:// <input name="CM" 
maxlength="32"> .local<br>Client IP: <span class="sip">Not connected</span><br>
<h3>Configure Access Point</h3>AP SSID (leave empty for no AP):<br><input 
name="AS" maxlength="32"><br>Hide AP name: <input type="checkbox" name="AH"><br>
AP password (leave empty for open):<br><input type="password" name="AP" 
maxlength="63"><br>Access Point WiFi channel: <input name="AC" type="number" 
min="1" max="13" required><br>AP opens: <select name="AB"><option value="0">
No connection after boot</option><option value="1">Disconnected</option><option 
value="2">Always</option><option value="3">Never (not recommended)</option>
</select><br>AP IP: <span class="sip">Not active</span><br><h3>Experimental</h3>
Disable WiFi sleep: <input type="checkbox" name="WS"><br><i>
Can help with connectivity issues.<br>
Do not enable if WiFi is working correctly, increases power consumption.</i><hr>
<button type="button" onclick="B()">Back</button><button type="submit">
Save & Connect</button></form></body></html>)=====";


// Autogenerated from wled00/data/settings_leds.htm, do not edit!!
const char PAGE_settings_leds[] PROGMEM = R"=====(<!DOCTYPE html><html><head><meta charset="utf-8"><meta name="viewport" 
content="width=500"><title>LED Settings</title><script>
var d=document,laprev=55;function H(){window.open("https://github.com/atuline/WLED/wiki/Settings#led-settings")}function B(){window.open("/settings","_self")}function S(){GetV(),setABL()}function enABL(){var e=d.getElementById("able").checked;d.Sf.LA.value=e?laprev:0,d.getElementById("abl").style.display=e?"inline":"none",d.getElementById("psu2").style.display=e?"inline":"none",d.Sf.LA.value>0&&setABL()}function enLA(){var e=d.Sf.LAsel.value;d.Sf.LA.value=e,d.getElementById("LAdis").style.display=50==e?"inline":"none",UI()}function setABL(){switch(d.getElementById("able").checked=!0,d.Sf.LAsel.value=50,parseInt(d.Sf.LA.value)){case 0:d.getElementById("able").checked=!1,enABL();break;case 30:d.Sf.LAsel.value=30;break;case 35:d.Sf.LAsel.value=35;break;case 55:d.Sf.LAsel.value=55;break;case 255:d.Sf.LAsel.value=255;break;default:d.getElementById("LAdis").style.display="inline"}UI()}function UI(){var e=d.querySelectorAll(".wc"),l=e.length;for(i=0;i<l;i++)e[i].style.display=d.getElementById("rgbw").checked?"inline":"none";d.getElementById("ledwarning").style.display=d.Sf.LC.value>1e3?"inline":"none",d.getElementById("ampwarning").style.display=d.Sf.MA.value>7200?"inline":"none",255==d.Sf.LA.value?laprev=12:d.Sf.LA.value>0&&(laprev=d.Sf.LA.value);var n=Math.ceil((100+d.Sf.LC.value*laprev)/500)/2;n=n>5?Math.ceil(n):n;var t="",a=30==d.Sf.LAsel.value,s=255==d.Sf.LAsel.value;n<1.02&&!a&&!s?t="ESP 5V pin with 1A USB supply":(t+=a?"12V ":s?"WS2815 12V ":"5V ",t+=n,t+="A supply connected to LEDs");var u=Math.ceil((100+d.Sf.LC.value*laprev)/1500)/2,y="(for most effects, ~";y+=u=u>5?Math.ceil(u):u,y+="A is enough)<br>",d.getElementById("psu").innerHTML=t,d.getElementById("psu2").innerHTML=s?"":y;var f=parseInt(d.Sf.LCW.value,10),v=parseInt(d.Sf.LCH.value,10);isNaN(f)||isNaN(v)||!(f>0||v>0)||f*v==parseInt(d.Sf.LC.value,10)?(d.getElementById("2dwarning").style.display="none",d.getElementById("submitButton").disabled=!1,d.getElementById("submitButton2").disabled=!1):(d.getElementById("2dwarning").style.display="inline",d.getElementById("submitButton").disabled=!1,d.getElementById("submitButton2").disabled=!1)}function GetV() {var d=document;
%CSS%%SCSS%</head><body onload="S()"><form
 id="form_s" name="Sf" method="post"><div class="helpB"><button type="button" 
onclick="H()">?</button></div><button type="button" onclick="B()">Back</button>
<button type="submit">Save</button><hr><h2>LED setup</h2>LED count: <input 
name="LC" type="number" min="1" max="1500" oninput="UI()" required><br><div 
id="ledwarning" style="color:orange;display:none">
&#9888; You might run into stability or lag issues.<br>
Use less than 1000 LEDs per ESP for the best experience!<br></div><i>
Recommended power supply for brightest white:</i><br><b><span id="psu">?</span>
</b><br><span id="psu2"><br></span><h3>2D Matrix</h3><input name="LCW" 
type="number" min="1" max="1500" oninput="UI()"> x <input name="LCH" 
type="number" min="1" max="1500" oninput="UI()"><br><div id="2dwarning" 
style="color:orange;display:inline">
&#9888; width x height should match LED count!<br></div>Serpentine: <input 
type="checkbox" name="LCWHS" checked="checked"> (how leds are layed out)<br><br>
Enable automatic brightness limiter: <input type="checkbox" name="ABen" 
onchange="enABL()" id="able"><br><div id="abl">Maximum Current: <input 
name="MA" type="number" min="250" max="65000" oninput="UI()" required> mA<br>
<div id="ampwarning" style="color:orange;display:none">
&#9888; Your power supply provides high current.<br>
To improve the safety of your setup,<br>please use thick cables,<br>
multiple power injection points and a fuse!<br></div><i>
Automatically limits brightness to stay close to the limit.<br>
Keep at &lt;1A if powering LEDs directly from the ESP 5V pin!<br>
If you are using an external power supply, enter its rating.<br>
(Current estimated usage: <span class="pow">unknown</span>)</i><br><br>
LED voltage (Max. current for a single LED):<br><select name="LAsel" 
onchange="enLA()"><option value="55" selected="selected">5V default (55mA)
</option><option value="35">5V efficient (35mA)</option><option value="30">
12V (30mA)</option><option value="255">WS2815 (12mA)</option><option value="50">
Custom</option></select><br><span id="LAdis" style="display:none">
Custom max. current per LED: <input name="LA" type="number" min="0" max="255" 
id="la" oninput="UI()" required> mA<br></span><i>
Keep at default if you are unsure about your type of LEDs.</i><br></div><br>
LEDs are 4-channel type (RGBW): <input type="checkbox" name="EW" 
onchange="UI()" id="rgbw"><br><span class="wc">
Auto-calculate white channel from RGB:<br><select name="AW"><option value="0">
None</option><option value="1">Brighter</option><option value="2">Accurate
</option><option value="3">Dual</option><option value="4">Legacy</option>
</select><br></span>Color order: <select name="CO"><option value="0">GRB
</option><option value="1">RGB</option><option value="2">BRG</option><option 
value="3">RBG</option><option value="4">BGR</option><option value="5">GBR
</option></select><h3>Defaults</h3>Turn LEDs on after power up/reset: <input 
type="checkbox" name="BO"><br>Default brightness: <input name="CA" 
type="number" min="0" max="255" required> (0-255)<br><br>Apply preset <input 
name="BP" type="number" min="0" max="250" required> at boot (0 uses defaults)
<br>- <i>or</i> -<br>Set current preset cycle setting as boot default: <input 
type="checkbox" name="PC"><br><br>Use Gamma correction for color: <input 
type="checkbox" name="GC"> (strongly recommended)<br>
Use Gamma correction for brightness: <input type="checkbox" name="GB">
 (not recommended)<br><br>Brightness factor: <input name="BF" type="number" 
min="1" max="255" required> %<h3>Transitions</h3>Crossfade: <input 
type="checkbox" name="TF"><br>Transition Time: <input name="TD" maxlength="5" 
size="2"> ms<br>Enable Palette transitions: <input type="checkbox" name="PF">
<h3>Timed light</h3>Default Duration: <input name="TL" type="number" min="1" 
max="255" required> min<br>Default Target brightness: <input name="TB" 
type="number" min="0" max="255" required><br>Mode: <select name="TW"><option 
value="0">Wait and set</option><option value="1">Fade</option><option value="2">
Fade Color</option><option value="3">Sunrise</option></select><h3>Advanced</h3>
Palette blending: <select name="PB"><option value="0">Linear (wrap if moving)
</option><option value="1">Linear (always wrap)</option><option value="2">
Linear (never wrap)</option><option value="3">None (not recommended)</option>
</select><br>Reverse LED order (rotate 180): <input type="checkbox" name="RV">
<br>Skip first LED: <input type="checkbox" name="SL"><hr><button type="button" 
onclick="B()">Back</button><button type="submit">Save</button></form></body>
</html>)=====";


// Autogenerated from wled00/data/settings_sound.htm, do not edit!!
const char PAGE_settings_sound[] PROGMEM = R"=====(<!DOCTYPE html><html><head><meta charset="utf-8"><meta name="viewport" 
content="width=500"><title>Sound Settings</title><script>
var d=document;function H(){window.open("https://github.com/atuline/WLED/wiki/Squelch-and-Gain")}function B(){window.open("/settings","_self")}function GetV() {var d=document;
%CSS%%SCSS%</head><body onload="GetV()">
<form id="form_s" name="Sf" method="post"><div class="helpB"><button 
type="button" onclick="H()">?</button></div><button type="button" onclick="B()">
Back</button><button type="submit">Save</button><hr><h2>Sound Input Settings
</h2>Squelch: <input name="SQ" type="number" min="0" max="255" required><br>
Gain: <input name="GN" type="number" min="0" max="255" required><br><button 
type="button" onclick="B()">Back</button><button type="submit">Save</button>
</form></body></html>)=====";


#ifdef WLED_ENABLE_DMX

// Autogenerated from wled00/data/settings_dmx.htm, do not edit!!
const char PAGE_settings_dmx[] PROGMEM = R"=====(<!DOCTYPE html><html><head><meta name="viewport" content="width=500"><meta 
charset="utf-8"><title>DMX Settings</title><script>
function GCH(n){for(d=document,d.getElementById("dmxchannels").innerHTML+="",i=0;i<n;i++)d.getElementById("dmxchannels").innerHTML+="<span id=CH"+(i+1)+"s >Channel "+(i+1)+": <select name=CH"+(i+1)+' id="CH'+(i+1)+'"><option value=0>Set to 0</option><option value=1>Red</option><option value=2>Green</option><option value=3>Blue</option><option value=4>White</option><option value=5>Shutter (Brightness)</option><option value=6>Set to 255</option></select></span><br />\n'}function mMap(){for(d=document,numCh=document.Sf.CN.value,numGap=document.Sf.CG.value,parseInt(numCh)>parseInt(numGap)?d.getElementById("gapwarning").style.display="block":d.getElementById("gapwarning").style.display="none",i=0;i<15;i++)i>=numCh?(d.getElementById("CH"+(i+1)+"s").style.opacity="0.5",d.getElementById("CH"+(i+1)).disabled=!0):(d.getElementById("CH"+(i+1)+"s").style.opacity="1",d.getElementById("CH"+(i+1)).disabled=!1)}function S(){GCH(15),GetV(),mMap()}function H(){window.open("https://github.com/atuline/WLED/wiki/DMX")}function B(){window.history.back()}function GetV() {var d=document;
%CSS%%SCSS%</head><body onload="S()"><form
 id="form_s" name="Sf" method="post"><div class="helpB"><button type="button" 
onclick="H()">?</button></div><button type="button" onclick="B()">Back</button>
<button type="submit">Save</button><hr><h2>
Imma firin ma lazer (if it has DMX support)</h2>Proxy Universe <input name="PU" 
type="number" min="0" max="63999" required> from E1.31 to DMX (0=disabled)<br>
<i>This will disable the LED data output to DMX configurable below</i><br><br>
<i>Number of fixtures is taken from LED config page</i><br>
Channels per fixture (15 max): <input type="number" min="1" max="15" name="CN" 
maxlength="2" onchange="mMap()"><br>Start channel: <input type="number" min="1" 
max="512" name="CS" maxlength="2"><br>Spacing between start channels: <input 
type="number" min="1" max="512" name="CG" maxlength="2" onchange="mMap()"> [ <a 
href="javascript:alert('if set to 10, first fixture will start at 10,\nsecond will start at 20 etc.\nRegardless of the channel count.\nMakes memorizing channel numbers easier.');">
info</a> ]<br><div id="gapwarning" style="color:orange;display:none">
WARNING: Channel gap is lower than channels per fixture.<br>
This will cause overlap.</div><button type="button" 
onclick='location.href="/dmxmap"'>DMX Map</button><br>DMX fixtures start LED: 
<input type="number" min="0" max="1500" name="SL"><h3>Channel functions</h3><div
 id="dmxchannels"></div><hr><button type="button" onclick="B()">Back</button>
<button type="submit">Save</button></form></body></html>)=====";


#else
const char PAGE_settings_dmx[] PROGMEM = R"=====()=====";
#endif

// Autogenerated from wled00/data/settings_ui.htm, do not edit!!
const char PAGE_settings_ui[] PROGMEM = R"=====(<!DOCTYPE html><html><head><meta charset="utf-8"><meta name="viewport" 
content="width=500"><title>UI Settings</title><script>
var initial_ds,initial_st,d=document,sett=null,l={comp:{labels:"Show button labels",colors:{LABEL:"Color selection methods",picker:"Color Wheel",rgb:"RGB sliders",quick:"Quick color selectors",hex:"HEX color input"},pcmbot:"Show bottom tab bar in PC mode"},theme:{alpha:{bg:"Background opacity",tab:"Button opacity"},bg:{url:"BG image URL"},color:{bg:"BG HEX color"}}};function gId(e){return d.getElementById(e)}function isObject(e){return e&&"object"==typeof e&&!Array.isArray(e)}function set(e,i,t){for(var n=i,l=e.split("_"),s=l.length,o=0;o<s-1;o++){var a=l[o];n[a]||(n[a]={}),n=n[a]}n[l[s-1]]=t}function addRec(e,t="",n=null){var l="";for(i in e){var s=t+(t?"_":"")+i;if(isObject(e[i]))n&&n[i]&&n[i].LABEL&&(l+=`<h3>${n[i].LABEL}</h3>`),l+=addRec(e[i],s,n?n[i]:null);else{var o=s;if(n&&n[i]?o=n[i]:e[i+"LABEL"]&&(o=e[i+"LABEL"]),i.indexOf("LABEL")>0)continue;var a=typeof e[i];gId(s)?("boolean"===a?gId(s).checked=e[i]:gId(s).value=e[i],gId(s).previousElementSibling.matches(".l")&&(gId(s).previousElementSibling.innerHTML=o)):"boolean"===a?l+=`${o}: <input class="agi cb" type="checkbox" id=${s} ${e[i]?"checked":""}><br>`:"number"===a?l+=`${o}: <input class="agi" type="number" id=${s} value=${e[i]}><br>`:"string"===a&&(l+=`${o}:<br><input class="agi" id=${s} value=${e[i]}><br>`)}}return l}function genForm(e){var i;i=addRec(e,"",l),gId("gen").innerHTML=i}function GetLS(){(sett=localStorage.getItem("wledUiCfg"))||(gId("lserr").style.display="inline");try{sett=JSON.parse(sett)}catch(e){sett={},gId("lserr").style.display="inline",gId("lserr").innerHTML="&#9888; Settings JSON parsing failed. ("+e+")"}genForm(sett),gId("dm").checked="light"===gId("theme_base").value}function SetLS(){for(var e=d.querySelectorAll(".agi"),i=0;i<e.length;i++){var t=e[i],n=t.classList.contains("cb")?t.checked:t.value;set(t.id,sett,n),console.log(`${t.id} set to ${n}`)}try{localStorage.setItem("wledUiCfg",JSON.stringify(sett)),gId("lssuc").style.display="inline"}catch(t){gId("lssuc").style.display="none",gId("lserr").style.display="inline",gId("lserr").innerHTML="&#9888; Settings JSON saving failed. ("+t+")"}}function Save(){SetLS(),d.Sf.DS.value==initial_ds&&d.Sf.ST.checked==initial_st||d.Sf.submit()}function S(){GetV(),initial_ds=d.Sf.DS.value,initial_st=d.Sf.ST.checked,GetLS()}function H(){window.open("https://github.com/atuline/WLED/wiki/Settings#user-interface-settings")}function B(){window.open("/settings","_self")}function UI(){gId("idonthateyou").style.display=gId("dm").checked?"inline":"none";var e=gId("theme_base");e&&(e.value=gId("dm").checked?"light":"dark")}function GetV() {var d=document;
%CSS%%SCSS%</head><body onload="S()"><form
 id="form_s" name="Sf" method="post"><div 
style="position:sticky;top:0;background-color:#222"><div class="helpB"><button 
type="button" onclick="H()">?</button></div><button type="button" onclick="B()">
Back</button><button type="button" onclick="Save()">Save</button><br><span 
id="lssuc" style="color:green;display:none">&#10004; Local UI settings saved!
</span> <span id="lserr" style="color:red;display:none">
&#9888; Could not access local storage. Make sure it is enabled in your browser.
</span><hr></div><h2>Web Setup</h2>Server description: <input name="DS" 
maxlength="32"><br>Sync button toggles both send and receive: <input 
type="checkbox" name="ST"><br><i>
The following UI customization settings are unique both to the WLED device and this browser.
<br>
You will need to set them again if using a different browser, device or WLED IP address.
<br>Refresh the main UI to apply changes.</i><br><div id="gen">
Loading settings...</div><h3>UI Appearance</h3><span class="l"></span>: <input 
type="checkbox" id="comp_labels" class="agi cb"><br><span class="l"></span>: 
<input type="checkbox" id="comp_pcmbot" class="agi cb"><br>I hate dark mode: 
<input type="checkbox" id="dm" onchange="UI()"><br><span id="idonthateyou" 
style="display:none"><i>Why would you? </i>&#x1F97A;<br></span><span class="l">
</span>: <input type="number" min="0.0" max="1.0" step="0.01" 
id="theme_alpha_tab" class="agi"><br><span class="l"></span>: <input 
type="number" min="0.0" max="1.0" step="0.01" id="theme_alpha_bg" class="agi">
<br><span class="l"></span>: <input id="theme_color_bg" maxlength="9" 
class="agi"><br><span class="l">BG image URL</span>: <input id="theme_bg_url" 
class="agi"> <input id="theme_base" class="agi" style="display:none"><hr><button
 type="button" onclick="B()">Back</button><button type="button" 
onclick="Save()">Save</button></form></body></html>)=====";


// Autogenerated from wled00/data/settings_sync.htm, do not edit!!
const char PAGE_settings_sync[] PROGMEM = R"=====(<!DOCTYPE html><html><head><meta name="viewport" content="width=500"><meta 
charset="utf-8"><title>Sync Settings</title><script>
var d=document;function H(){window.open("https://github.com/atuline/WLED/wiki/Settings#sync-settings")}function B(){window.open("/settings","_self")}function adj(){6454==d.Sf.DI.value?(1==d.Sf.DA.value&&(d.Sf.DA.value=0),1==d.Sf.EU.value&&(d.Sf.EU.value=0)):5568==d.Sf.DI.value&&(0==d.Sf.DA.value&&(d.Sf.DA.value=1),0==d.Sf.EU.value&&(d.Sf.EU.value=1))}function SP(){var e=d.Sf.DI.value;d.getElementById("xp").style.display=e>0?"none":"block",e>0&&(d.Sf.EP.value=e)}function SetVal(){switch(parseInt(d.Sf.EP.value)){case 5568:d.Sf.DI.value=5568;break;case 6454:d.Sf.DI.value=6454;break;case 4048:d.Sf.DI.value=4048}SP()}function S(){GetV(),SetVal()}function GetV() {
%CSS%%SCSS%</head><body onload="S()"><form
 id="form_s" name="Sf" method="post"><div class="helpB"><button type="button" 
onclick="H()">?</button></div><button type="button" onclick="B()">Back</button>
<button type="submit">Save</button><hr><h2>Sync setup</h2><h3>Button setup</h3>
On/Off button enabled: <input type="checkbox" name="BT"><br>Infrared remote: 
<select name="IR"><option value="0">Disabled</option><option value="1">
24-key RGB</option><option value="2">24-key with CT</option><option value="3">
40-key blue</option><option value="4">44-key RGB</option><option value="5">
21-key RGB</option><option value="6">6-key black</option><option value="7">
9-key red</option></select><br><a 
href="https://github.com/atuline/WLED/wiki/Infrared-Control" target="_blank">
IR info</a><h3>WLED Broadcast</h3>UDP Port: <input name="UP" type="number" 
min="1" max="65535" class="d5" required><br>2nd Port: <input name="U2" 
type="number" min="1" max="65535" class="d5" required><br>Receive <input 
type="checkbox" name="RB">Brightness, <input type="checkbox" name="RC">
Color, and <input type="checkbox" name="RX">Effects<br>
Send notifications on direct change: <input type="checkbox" name="SD"><br>
Send notifications on button press: <input type="checkbox" name="SB"><br>
Send Alexa notifications: <input type="checkbox" name="SA"><br>
Send Philips Hue change notifications: <input type="checkbox" name="SH"><br>
Send Macro notifications: <input type="checkbox" name="SM"><br>
Send notifications twice: <input type="checkbox" name="S2"><br><i>
Reboot required to apply changes.</i><h3>Realtime</h3>Receive UDP realtime: 
<input type="checkbox" name="RD"><br><br><i>Network DMX input</i><br>Type: 
<select name="DI" onchange="SP(),adj()"><option value="5568">E1.31 (sACN)
</option><option value="6454">Art-Net</option><option value="4048">DDP</option>
<option value="0" selected="selected">Custom port</option></select><br><div 
id="xp">Port: <input name="EP" type="number" min="1" max="65535" value="5568" 
class="d5" required><br></div>Multicast: <input type="checkbox" name="EM"><br>
Start universe: <input name="EU" type="number" min="0" max="63999" required><br>
<i>Reboot required.</i> Check out <a href="https://github.com/ahodges9/LedFx" 
target="_blank">LedFx</a>!<br>Skip out-of-sequence packets: <input 
type="checkbox" name="ES"><br>DMX start address: <input name="DA" type="number" 
min="0" max="510" required><br>DMX mode: <select name="DM"><option value="0">
Disabled</option><option value="1">Single RGB</option><option value="2">
Single DRGB</option><option value="3">Effect</option><option value="4">Multi RGB
</option><option value="5">Dimmer + Multi RGB</option></select><br><a 
href="https://github.com/atuline/WLED/wiki/E1.31-DMX" target="_blank">E1.31 info
</a><br>Timeout: <input name="ET" type="number" min="1" max="65000" required> ms
<br>Force max brightness: <input type="checkbox" name="FB"><br>
Disable realtime gamma correction: <input type="checkbox" name="RG"><br>
Realtime LED offset: <input name="WO" type="number" min="-255" max="255" 
required><h3>Alexa Voice Assistant</h3>Emulate Alexa device: <input 
type="checkbox" name="AL"><br>Alexa invocation name: <input name="AI" 
maxlength="32"><h3>Blynk</h3><b>
Blynk, MQTT and Hue sync all connect to external hosts!<br>
This may impact the responsiveness of the ESP8266.</b><br>
For best results, only use one of these services at a time.<br>
(alternatively, connect a second ESP to them and use the UDP sync)<br><br>
Device Auth token: <input name="BK" maxlength="33"><br><i>
Clear the token field to disable. </i><a 
href="https://github.com/atuline/WLED/wiki/Blynk" target="_blank">Setup info</a>
<h3>MQTT</h3>Enable MQTT: <input type="checkbox" name="MQ"><br>Broker: <input 
name="MS" maxlength="32"> Port: <input name="MQPORT" type="number" min="1" 
max="65535" class="d5"><br><b>
The MQTT credentials are sent over an unsecured connection.<br>
Never use the MQTT password for another service!</b><br>Username: <input 
name="MQUSER" maxlength="40"><br>Password: <input type="password" input 
name="MQPASS" maxlength="40"><br>Client ID: <input name="MQCID" maxlength="40">
<br>Device Topic: <input name="MD" maxlength="32"><br>Group Topic: <input 
name="MG" maxlength="32"><br><i>Reboot required to apply changes. </i><a 
href="https://github.com/atuline/WLED/wiki/MQTT" target="_blank">MQTT info</a>
<h3>Philips Hue</h3><i>
You can find the bridge IP and the light number in the 'About' section of the hue app.
</i><br>Poll Hue light <input name="HL" type="number" min="1" max="99"> every 
<input name="HI" type="number" min="100" max="65000"> ms: <input 
type="checkbox" name="HP"><br>Then, receive <input type="checkbox" name="HO">
 On/Off, <input type="checkbox" name="HB"> Brightness, and <input 
type="checkbox" name="HC"> Color<br>Hue Bridge IP:<br><input name="H0" 
type="number" min="0" max="255"> . <input name="H1" type="number" min="0" 
max="255"> . <input name="H2" type="number" min="0" max="255"> . <input 
name="H3" type="number" min="0" max="255"><br><b>
Press the pushlink button on the bridge, after that save this page!</b><br>
(when first connecting)<br>Hue status: <span class="sip">Disabled in this build
</span><hr><h3>Audio Sync</h3>Mode: <select name="ASE"><option value="0">
Disabled</option><option value="1">Transmit</option><option value="2">Receive
</option></select> Port: <input name="ASP" type="number" min="1" max="65535" 
class="d5"><br><i>Reboot required for changes to take effect.</i><hr><button 
type="button" onclick="B()">Back</button><button type="submit">Save</button>
</form></body></html>)=====";


// Autogenerated from wled00/data/settings_time.htm, do not edit!!
const char PAGE_settings_time[] PROGMEM = R"=====(<!DOCTYPE html><html><head><meta name="viewport" content="width=500"><meta 
charset="utf-8"><title>Time Settings</title><script>
var d=document;function H(){window.open("https://github.com/atuline/WLED/wiki/Settings#time-settings")}function B(){window.open("/settings","_self")}function S(){BTa(),GetV(),Cs(),FC()}function gId(t){return d.getElementById(t)}function Cs(){gId("cac").style.display="none",gId("coc").style.display="block",gId("ccc").style.display="none",gId("ca").selected&&(gId("cac").style.display="block"),gId("cc").selected&&(gId("coc").style.display="none",gId("ccc").style.display="block"),gId("cn").selected&&(gId("coc").style.display="none")}function BTa(){var t="<tr><th>Active</th><th>Hour</th><th>Minute</th><th>Preset</th><th>M</th><th>T</th><th>W</th><th>T</th><th>F</th><th>S</th><th>S</th></tr>";for(i=0;i<8;i++)for(t+='<tr><td><input name="W'+i+'" id="W'+i+'" type="number" style="display:none"><input id="W'+i+'0" type="checkbox"></td><td><input name="H'+i+'" type="number" min="0" max="24"></td><td><input name="N'+i+'" type="number" min="0" max="59"></td><td><input name="T'+i+'" type="number" min="0" max="250"></td>',j=1;j<8;j++)t+='<td><input id="W'+i+j+'" type="checkbox"></td>';gId("TMT").innerHTML=t}function FC(){for(j=0;j<8;j++)for(i=0;i<8;i++)gId("W"+i+j).checked=gId("W"+i).value>>j&1}function Wd(){for(a=[0,0,0,0,0,0,0,0],i=0;i<8;i++){for(m=1,j=0;j<8;j++)a[i]+=gId("W"+i+j).checked*m,m*=2;gId("W"+i).value=a[i]}}function GetV() {
%CSS%%SCSS%</head><body onload="S()"><form
 id="form_s" name="Sf" method="post" onsubmit="Wd()"><div class="helpB"><button 
type="button" onclick="H()">?</button></div><button type="button" onclick="B()">
Back</button><button type="submit">Save</button><hr><h2>Time setup</h2>
Get time from NTP server: <input type="checkbox" name="NT"><br><input name="NS" 
maxlength="32"><br>Use 24h format: <input type="checkbox" name="CF"><br>
Time zone: <select name="TZ"><option value="0" selected="selected">GMT(UTC)
</option><option value="1">GMT/BST</option><option value="2">CET/CEST</option>
<option value="3">EET/EEST</option><option value="4">US-EST/EDT</option><option 
value="5">US-CST/CDT</option><option value="6">US-MST/MDT</option><option 
value="7">US-AZ</option><option value="8">US-PST/PDT</option><option value="9">
CST(AWST)</option><option value="10">JST(KST)</option><option value="11">
AEST/AEDT</option><option value="12">NZST/NZDT</option><option value="13">
North Korea</option><option value="14">IST (India)</option><option value="15">
CA-Saskatchewan</option><option value="16">ACST</option><option value="17">
ACST/ACDT</option></select><br>UTC offset: <input name="UO" type="number" 
min="-65500" max="65500" required> seconds (max. 18 hours)<br>
Current local time is <span class="times">unknown</span>.<h3>Clock</h3>
Clock Overlay: <select name="OL" onchange="Cs()"><option value="0" id="cn" 
selected="selected">None</option><option value="1" id="ca">Analog Clock</option>
<option value="2">Single Digit Clock</option><option value="3" id="cc">
Cronixie Clock</option></select><br><div id="coc">First LED: <input name="O1" 
type="number" min="0" max="255" required> Last LED: <input name="O2" 
type="number" min="0" max="255" required><br><div id="cac">12h LED: <input 
name="OM" type="number" min="0" max="255" required><br>Show 5min marks: <input 
type="checkbox" name="O5"><br></div>Seconds (as trail): <input type="checkbox" 
name="OS"><br></div><div id="ccc">Cronixie Display: <input name="CX" 
maxlength="6"><br>Cronixie Backlight: <input type="checkbox" name="CB"><br>
</div>Countdown Mode: <input type="checkbox" name="CE"><br>Countdown Goal:<br>
Year: 20 <input name="CY" type="number" min="0" max="99" required> Month: <input
 name="CI" type="number" min="1" max="12" required> Day: <input name="CD" 
type="number" min="1" max="31" required><br>Hour: <input name="CH" 
type="number" min="0" max="23" required> Minute: <input name="CM" type="number" 
min="0" max="59" required> Second: <input name="CS" type="number" min="0" 
max="59" required><br><h3>Macro presets</h3><b>Macros have moved!</b><br><i>
Presets now also can be used as macros to save both JSON and HTTP API commands.
<br>Just enter the preset id below!</i> <i>
Use 0 for the default action instead of a preset</i><br>Alexa On/Off Preset: 
<input name="A0" type="number" min="0" max="250" required> <input name="A1" 
type="number" min="0" max="250" required><br>Button short press Preset: <input 
name="MP" type="number" min="0" max="250" required><br>Long Press: <input 
name="ML" type="number" min="0" max="250" required> Double press: <input 
name="MD" type="number" min="0" max="250" required><br>Countdown-Over Preset: 
<input name="MC" type="number" min="0" max="250" required><br>
Timed-Light-Over Presets: <input name="MN" type="number" min="0" max="250" 
required><br><h3>Time-controlled presets</h3><div style="display:inline-block">
<table id="TMT"></table></div><hr><button type="button" onclick="B()">Back
</button><button type="submit">Save</button></form></body></html>)=====";


// Autogenerated from wled00/data/settings_sec.htm, do not edit!!
const char PAGE_settings_sec[] PROGMEM = R"=====(<!DOCTYPE html><html><head><meta name="viewport" content="width=500"><meta 
charset="utf-8"><title>Misc Settings</title><script>
function H(){window.open("https://github.com/atuline/WLED/wiki/Settings#security-settings")}function B(){window.open("/settings","_self")}function U(){window.open("/update","_self")}function GetV() {var d=document;
%CSS%%SCSS%</head><body onload="GetV()">
<form id="form_s" name="Sf" method="post"><div class="helpB"><button 
type="button" onclick="H()">?</button></div><button type="button" onclick="B()">
Back</button><button type="submit">Save & Reboot</button><hr><h2>
Security & Update setup</h2>Lock wireless (OTA) software update: <input 
type="checkbox" name="NO"><br>Passphrase: <input type="password" name="OP" 
maxlength="32"><br>
To enable OTA, for security reasons you need to also enter the correct password!
<br>The password should be changed when OTA is enabled.<br><b>
Disable OTA when not in use, otherwise an attacker can reflash device software!
</b><br><i>Settings on this page are only changable if OTA lock is disabled!</i>
<br>Deny access to WiFi settings if locked: <input type="checkbox" name="OW">
<br><br>Factory reset: <input type="checkbox" name="RS"><br>
All EEPROM content (settings) will be erased.<br><br>
HTTP traffic is unencrypted. An attacker in the same network can intercept form data!
<h3>Software Update</h3><button type="button" onclick="U()">Manual OTA Update
</button><br>Enable ArduinoOTA: <input type="checkbox" name="AO"><br><h3>About
</h3><a href="https://github.com/atuline/WLED/" target="_blank">WLED</a>
 version 0.11.0p<br><br><a 
href="https://github.com/atuline/WLED/wiki/Contributors-&-About" 
target="_blank">Contributors, dependencies and special thanks</a><br>
A huge thank you to everyone who helped me create WLED!<br><br>
(c) 2016-2020 Christian Schwinne<br><i>Licensed under the <a 
href="https://github.com/atuline/WLED/blob/master/LICENSE" target="_blank">
MIT license</a></i><br><br>Server message: <span class="sip">Response error!
</span><hr><button type="button" onclick="B()">Back</button><button 
type="submit">Save & Reboot</button></form></body></html>)=====";

