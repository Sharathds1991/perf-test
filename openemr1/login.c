login()
{

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("openemr", 
		"URL=http://{url}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
