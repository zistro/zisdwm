#!/usr/bin/env bash

if nmcli -t -f STATE dev | grep -q 'connected'; then
    echo "CONNECTED"
else
    echo "INTERRUPTED"
fi

# Uncomment this part when using wifi and comment uper if to fi part
# you can also change the ethernet nerd font icon from  to   just
# edit blocks.def.h and rm blocks.h and sudo make install
# if nmcli -t -f TYPE,STATE device | grep -q "^wifi:connected$"; then
#    wifi_status="CONNECTED"
# else
#    wifi_status="INTERRUPTED"
# fi
