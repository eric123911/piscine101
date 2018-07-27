cat contacts_hard.txt | \
	grep BauEr | \
	awk '/bauer*/{ print $4 }'
