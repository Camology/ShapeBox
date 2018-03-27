```

  ██████  ██░ ██  ▄▄▄       ██▓███  ▓█████     ▄▄▄▄    ▒█████  ▒██   ██▒
▒██    ▒ ▓██░ ██▒▒████▄    ▓██░  ██▒▓█   ▀    ▓█████▄ ▒██▒  ██▒▒▒ █ █ ▒░
░ ▓██▄   ▒██▀▀██░▒██  ▀█▄  ▓██░ ██▓▒▒███      ▒██▒ ▄██▒██░  ██▒░░  █   ░
  ▒   ██▒░▓█ ░██ ░██▄▄▄▄██ ▒██▄█▓▒ ▒▒▓█  ▄    ▒██░█▀  ▒██   ██░ ░ █ █ ▒ 
▒██████▒▒░▓█▒░██▓ ▓█   ▓██▒▒██▒ ░  ░░▒████▒   ░▓█  ▀█▓░ ████▓▒░▒██▒ ▒██▒
▒ ▒▓▒ ▒ ░ ▒ ░░▒░▒ ▒▒   ▓▒█░▒▓▒░ ░  ░░░ ▒░ ░   ░▒▓███▀▒░ ▒░▒░▒░ ▒▒ ░ ░▓ ░
░ ░▒  ░ ░ ▒ ░▒░ ░  ▒   ▒▒ ░░▒ ░      ░ ░  ░   ▒░▒   ░   ░ ▒ ▒░ ░░   ░▒ ░
░  ░  ░   ░  ░░ ░  ░   ▒   ░░          ░       ░    ░ ░ ░ ░ ▒   ░    ░  
      ░   ░  ░  ░      ░  ░            ░  ░    ░          ░ ░   ░    ░  
                                                    ░                   

```

Authors: Todd Vorisek, Cameron Titus, Aj Carvajal

This is the repo for a C++ library for creating PostScript files through literal words 
IE : You can say "Box on top of Triangle on top of circle" to generate a document that has those shapes and can be printed on any printer.

The idea of the project is to learn/practice more design patterns such as the interpreter pattern as well as further test driven development experience.


Grammar :

Shape -> Circle | Polygon | Rectangle | Spacer | Square | Triangle | VerticalShape | HorizontalShape | OverlapShape |Custom Shape (TBD) 
 
Circle -> "0 0" Number "0 360 arc"
 
Spacer -> Number Number "moveto"

Number  -> 0  
        -> 1  
        -> 2 
        
VerticalShape -> Number "0" "moveto"
