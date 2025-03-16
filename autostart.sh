#!/usr/bin/env bash

feh --bg-fill ~/.config/walls/foggy_valley_2.png &
dwmblocks &
dunst &
picom &
exec /usr/lib/mate-polkit/polkit-mate-authentication-agent-1
