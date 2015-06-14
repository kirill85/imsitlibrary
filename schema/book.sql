create table "book" (
    "isbn" varchar(50) not null,
    "author" varchar(255) not null,
    "type" varchar(255) not null,
    "genreId" integer not null,
    "publishingId" varchar(255) not null,
    "year" integer not null,
    "pages" integer not null,
    "annotation" varchar(255),
    "storageId" integer not null,
    "userId" integer not null,
    primary key ("isbn"),
    foreign key ("publishingId") on "publishing"."id",
    foreign key ("genreId") on "genre"."id",
    foreign key ("storageId") on "storage"."id",
    foreign key ("userId") on "user"."id"
);
