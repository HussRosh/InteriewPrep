# CODEMONK

## WHY : 

- Just before the placement season, while preparing I always had to go to either gfg, leetcode or techiedelight and then look for problems. And there would be a time that I had already solved that question or already done with the topic . So I came up with the idea of automating this process of mine to create some bot that would do the work for me. I wanted to code soutions to these problems , I wanted to make a plugin for a text editor.

- Now for me I had two choices for this. First , Visual Studio code or Sublime Text 3. I used both of them extensively , but for specific tasks. I used VScode primarily when I was working on a project, it had great collection of extensions , terminal, and great support for version control and git etc . But I used sublime text 3 mostly for small programs , especially during coding contests and eventually settled on choosing sublime text since its very light and fast.

## HOW : 

- I did some research on sublime text and its plugins and learnt that , its written in python , so I brushed up and revised my python . So I had started looking for appropriate libraries in python for web scraping . I settled on using Selenium and beautiful soup . I eventually thou8 of just making a python webscraping program which then later I could include into the python environment.

- For GFG the basic idea was to visit its must-to-coding-questions and select any random link from all those links. Then go to the selected random link and parse the Problem statement.

- For Leetcode it seemed easier at first because they already had a link which would redirect you to  a random question . For both the cases , I had to study their architecture a bit , of the page and view the html source in inspect element . And code accordingly . 


## Problems faced  : 
- For GFG , it was simple , I first loaded the page , then I got the whole HTML page . Now what I did was , I used beautiful soup to parse the page and out of 160+ interview questions , give me all the links in the page with prefix (started with) , practice , which would give me a list of all valid problem links . And from this list of links , I would then choose a random link and go to a problem statement , where I would then  , parse and extract , the problem , title , problem statement , from studying the page using inspect element and using beautifulSoup .

- Initially for leetcode, the code sometimes worked and sometimes it just did not which was confusing . Sometimes , the html page that was in response , just contained loading and sometimes , it just contained  , Google Captcha to prove not a robot , because they figured my application was a bot . To tackle the problem of avoiding captcha , I disguised my self as a headless Firefox browser. So what happened is , in background  , my program actually opened firefox brower and acted as a user (not a robot) to fool the google captcha and go to the page . And for the second problem when it always gave me loading sign , it is after sometime I realised that leetcode used ajax and javascript to load its div and content , and normal webscraping methods only took care of static pages and not dynamic content loading ,so then I used selenium's libraries which helped in checking to parse the html only when the whole or a specific div/content had been loaded . These libraries would actually wait to fetch the html page unless and until a particular element on the page hadnt been loaded (in my case I told it to wait for the div tag of the problem statement ) .  

- Third problem , I faced was integrating this code into sublime text plugin environment. But all the external libraries that I used were not able to import into the plugin. Its after some research I go to know that sublime text used its own sandbox of python 3.3 which they had with them thier own libraries . After few days , I got a way around this by including the path for imp files / libraries in the very beginning of the plugin, so evertime the plugin is loaded , it will import those files for that plugin.

