Keyboard plan:
- Make Tab into Meta-layer on hold, Tab on tap
- Setup tap hold homerow mods
- Norwegian letters from english layout?
- Setup meta layer for layout shifting without thumb cluster
- Setup numbers layer
- Setup symbols layer
- Setup navigation layer
- Setup F# layer
- Setup media keys layer
- Setup mouse layer
- Test autoshift
- Test capsword
- Consider leader key

Done:
- On default layer:
    - Make CapsLock into Ctrl on hold, Esc on tap
- On fn layer:
    - Add capslock to fn layer
    - Add tab to fn layer
- Add to-default-layer on esc in all layers
- Add metalayer
- Add numbers layer







Key	Description
DF(layer)	Set the base (default) layer
MO(layer)	Momentarily turn on layer when pressed (requires KC_TRNS on destination layer)
OSL(layer)	Momentarily activates layer until a key is pressed. See One Shot Keys for details.
LM(layer, mod)	Momentarily turn on layer (like MO) with mod active as well. Where mod is a mods_bit. Mods can be viewed here. Example Implementation: LM(LAYER_1, MOD_LALT)
LT(layer, kc)	Turn on layer when held, kc when tapped
TG(layer)	Toggle layer on or off
TO(layer)	Turns on layer and turns off all other layers, except the default layer
TT(layer)	Normally acts like MO unless it's tapped multiple times, which toggles layer on
