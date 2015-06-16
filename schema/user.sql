create table "user"
(
    "id" integer not null,
    "first_name" varchar(255) not null,
    "name" varchar(255) not null,
    "last_name" varchar(255) not null,
    "decanat" varchar(255) not null,
    "faculty" varchar(255) not null,
    "group" integer not null,
    "other" varchar(255),
    primary key ("id")
);
