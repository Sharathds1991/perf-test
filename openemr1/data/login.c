login()
{

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_add_cookie("GAPS=1:WeIzeAfrLtTnjoae_hd0FbR_2PSf4w:z82Fzlwk4kXQew90; DOMAIN=accounts.google.com");

	web_add_cookie("ANID=AHWqTUlZGhuH7rzszXvqqWmaQfeaYjWQEdG2sQQT7nvuMpIpC9KI02O8vxyCYVLw; DOMAIN=accounts.google.com");

	web_add_cookie("NID=179=CvfsREIKcAAEdnbaFZCGZoaKe7Aeg-4GSDf6qbKqQlBACbUwX66d2DX0OvrMvSZtJKwfhnQdCFjaW6IIND2x5IdtnTdRf43vzTNUYPdfEbcgYB_ZghYrfuFlGjnVsISTI7hPOceGpEf28X91ZKKN5aELBomtH6mR5eF2xS1RJLI; DOMAIN=accounts.google.com");

	web_add_cookie("1P_JAR=2019-3-21-14; DOMAIN=accounts.google.com");

	web_add_header("Origin", 
		"https://www.google.com");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"Body= ", 
		LAST);

	web_add_header("X-Goog-Update-AppId", 
		"aapocclcgogkmnckokdopfmhonfmgoek,blpcfgokakmgnkcojhhkbfbldkacnbeo,felcaaldnbdncclmgdcncolpebgiejap,ghbmnnjooekpmoecnnnilnnbdlolhkhi,nmmhkkegccagdldgiimedpiccmgmieda,pjkljhegncpnkpknbcohdijeoejaedia,pkedcjkdefgpdelpbcmbmeomcjbeemfm");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-73.0.3683.86");

	web_url("crx", 
		"URL=https://clients2.google.com/service/update2/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=chromecrx&prodchannel=&prodversion=73.0.3683.86&lang=en-US&acceptformat=crx2,crx3&x=id%3Daapocclcgogkmnckokdopfmhonfmgoek%26v%3D0.10%26installedby%3Dinternal%26uc%26brand%3DCHBF%26ping%3Dr%253D1%2526e%253D1&x=id%3Dblpcfgokakmgnkcojhhkbfbldkacnbeo%26v%3D4.2.8%26installedby%3Dinternal%26uc%26brand%3DCHBF%26ping%3Dr%253D1%2526e%253D1&x="
		"id%3Dfelcaaldnbdncclmgdcncolpebgiejap%26v%3D1.2%26installedby%3Dinternal%26uc%26brand%3DCHBF%26ping%3Dr%253D1%2526e%253D1&x=id%3Dghbmnnjooekpmoecnnnilnnbdlolhkhi%26v%3D1.7%26installedby%3Dexternal%26uc%26brand%3DCHBF%26ping%3Dr%253D1%2526e%253D1&x=id%3Dnmmhkkegccagdldgiimedpiccmgmieda%26v%3D1.0.0.4%26installedby%3Dother%26uc%26brand%3DCHBF%26ping%3Dr%253D1%2526e%253D1&x=id%3Dpjkljhegncpnkpknbcohdijeoejaedia%26v%3D8.1%26installedby%3Dinternal%26uc%26brand%3DCHBF%26ping%3Dr%253D1%2526e%253D1&x="
		"id%3Dpkedcjkdefgpdelpbcmbmeomcjbeemfm%26v%3D7319.128.0.1%26installedby%3Dother%26uc%26brand%3DCHBF%26ping%3Dr%253D1%2526e%253D1", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("openemr", 
		"URL=http://localhost/openemr", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
