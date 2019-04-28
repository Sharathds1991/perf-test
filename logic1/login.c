login()
{

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
