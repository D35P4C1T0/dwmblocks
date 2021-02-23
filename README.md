# dwmblocks - d35p4c1t0 flavour
Modular status bar for dwm written in c.

## Modifying dwmblocks
The statusbar is made from text output from scripts found in the scripts folder.  Blocks are added and removed by editing the blocks.h header file.

## Thigs you should consider
You will, of course, need my dwmblocks build and my scripts in the scripts folder. Make sure that ~/.local/bin is in your $PATH otherwise you can't call those scripts by name. As the default choice, I wrote out the full path to each script in the blocks.h. Feel free to change it if you want a cleaner look instead of the full path.

To add ~/.local/bin to $PATH, just add this line to your .bashrc:

	PATH="$HOME/.local/bin${PATH:+:${PATH}}"

## Requirements
- Get [this font](https://github.com/Templarian/MaterialDesign-Font) if you want the material design icons to be displayed properly.
- [dwm](https://dwm.suckless.org/)
