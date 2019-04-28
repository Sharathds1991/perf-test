logout()
{

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("logout.php", 
		"URL=http://localhost/openemr/interface/logout.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost/openemr/interface/main/main_title.php", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	web_link("Follow manually", 
		"Text=Follow manually", 
		"Snapshot=t31.inf", 
		LAST);

	return 0;
}