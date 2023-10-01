#!/bin/bash
timeout 60 docker compose up

docker compose logs server_hm > res.txt

echo ""
echo ""
echo ""
if grep -q "connect to" res.txt 
then 
    echo "Ok"
else 
    echo "NOK"
fi