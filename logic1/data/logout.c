logout()
{

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("index.php_16", 
		"URL=http://localhost/logic/admin/index.php?load=common/logout&token=16509acfe2ee0ab19d64ac069ce71986", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost/logic/admin/index.php?load=billing/invoice&token=16509acfe2ee0ab19d64ac069ce71986", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}