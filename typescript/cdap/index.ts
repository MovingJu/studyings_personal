type subjects = {
    subject ? : string | string[];
}

function get_last_subject(teacher : subjects) : string {
    if (typeof teacher.subject === "string"){
        return teacher.subject;
    }
    if (Array.isArray(teacher.subject)) {
        return teacher.subject[teacher.subject.length - 1];
    }
    else{
        return "None";
    }
}

function main(){
    console.log(
        get_last_subject({
            subject : ["science", "math"]
        })
    );
    console.log(
        get_last_subject({
            subject : "korean"
        })
    );
    console.log(
        get_last_subject({
            hello : "hi"
        })
    );
    
    return;
}

main();