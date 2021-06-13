<?php
	$menu_items = array("Home"=>"index",
			    "About Me"=>"about",
				"Contact"=>"contact");
	print "<ul class=\"menulist\">\n";

	foreach ($menu_items as $title=>$addr){
		if($title==$current_page)
			print "<li class=\"menu\">\n<span class=\"current_item\"><b>&raquo;</b>&nbsp;&nbsp;".$title."</span>\n</li>";
		else
			print "<li class=\"menu\">\n<a href=\"".$base_url.$addr.".php\" class=\"menu_item\"><b>&raquo;</b>&nbsp;&nbsp;".$title."</a>\n</li>";
	}

	print "</ul>\n";
	print "</td>\n";
	foreach ($menu_items as $title=>$addr){
		if($title==$current_page){
			print "<td class=\"header\" style=\"background-image:url(images/header.png);\">\n";
			print "Welcome to my homepage";
			print "&nbsp;";
		}
	}
	print "</td>\n";
	print "</tr>\n";
	print "<tr>\n";
	print "<td class=\"t_right\" valign=\"top\">\n";
	print "<div class=\"scrollable\">\n";
?>