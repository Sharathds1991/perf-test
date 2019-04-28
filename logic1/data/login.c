login()
{

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_add_cookie("ACCOUNT_CHOOSER=AFx_qI7ZlT8mBT1MyIZAnKyBM2JKAkblfpm5etwsS_uQ3xOJD7hwjhkNgZPO1LP8d0cK1GQ888CIUKlh8rNBDOyi26nPDzp0VNiRL6MwiO7ZP-DyOIpn7YL9i1l8Ltc50IG3z0J6Z1f4XnclHQMEz9bd4EtX19at4F3eioyePcQdO1ZQMIJV8vFKd_vBqNiI_5GzYO_hOzF3lTGmtZTMzbOWM2m1ibAvSg; DOMAIN=accounts.google.com");

	web_add_cookie("CONSENT=YES+IN.en-GB+; DOMAIN=accounts.google.com");

	web_add_cookie("GAPS=1:2uYF7WfQ67rRZhS6-F2_x0V-z2GLbS_VVnpAWUgWCuV3J_nEr-hCyEK5XXIX2Frh9GcszRX3_40lIKFseyZ9MoGW97DGbw:2vr72nxwj7MIXsQF; DOMAIN=accounts.google.com");

	web_add_cookie("ANID=AHWqTUljHV19LEnZviu-CUCBwNrc5RCJh0aTqKvUdtj-_K5FB9MWXaLJ-g8kMXQD; DOMAIN=accounts.google.com");

	web_add_cookie("1P_JAR=2019-04-13-06; DOMAIN=accounts.google.com");

	web_add_cookie("NID=181=IJ5KaP00wW5teqYsJrw_PlQfzTGJ0bQgTOPbHq4RoB0AY4p4yS7YWzveLQjUfOhBPAvRRBSrQsYSOhDTzp2c_u4Y6QLw1HTNDPNZsaKwhHyHPmpE7HK1H_E8BmpDg-4FaDdjOSBuUeyNKUCVeScfxISvh-wyH3dLh58OQsOQXTE; DOMAIN=accounts.google.com");

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

	web_add_auto_header("Purpose", 
		"prefetch");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("openemr", 
		"URL=http://localhost/openemr", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_url("admin", 
		"URL=http://localhost/logic/admin", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Purpose");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("admin_2", 
		"URL=http://localhost/logic/admin/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
