FROM nginx:1.27.5-alpine

COPY ./cosconf1.conf /etc/nginx/conf.d/cosconf1.conf
RUN rm /etc/nginx/conf.d/default.conf

EXPOSE 80

CMD ["nginx", "-g", "daemon off;"]