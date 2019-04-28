logout()
{

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("logout.php", 
		"URL=http://{url}/interface/logout.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{url}/interface/main/main_title.php", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	web_link("Follow manually", 
		"Text=Follow manually", 
		"Snapshot=t31.inf", 
		LAST);

	return 0;
}