#!/usr/bin/env bash

if nmcli -t -f STATE dev | grep -q 'connected'; then
    echo "CONNECTED"
else
    echo "INTERRUPTED"
fi

