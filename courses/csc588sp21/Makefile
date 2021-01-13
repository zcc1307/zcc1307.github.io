all: index.html schedule.html project.html

#syllabus.html 

%.html: %.md %.yaml template.html navbar.html
	pandoc $< -o $@ --metadata-file=$*.yaml -f markdown --template template.html --css bootstrap.css -B navbar.html

clean:
	$(RM) index.html schedule.html project.html

#syllabus.html 