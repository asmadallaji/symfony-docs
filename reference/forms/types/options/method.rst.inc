.. versionadded:: 2.3
    The ``method`` option was introduced in Symfony 2.3.

method
~~~~~~

**type**: ``string`` **default**: ``POST``

This option specifies the HTTP method used to submit the form's data. Its
value is rendered as the ``method`` attribute of the ``form`` element and is
used to decide whether to process the form submission in the
``handleRequest()`` method after submission. Possible values are:

* POST
* GET
* PUT
* DELETE
* PATCH

.. note:

    When the method is PUT, PATCH, or DELETE, Symfony will automatically
    render a ``_method`` hidden field in your form. This is used to "fake"
    these HTTP methods, as they're not supported on standard browsers. For
    more information, see :doc:`/cookbook/routing/method_parameters`.

.. note:

    Only the PATCH method allows submitting partial data without that missing
    fields are set to ``null`` in the underlying data (preserving default
    values, if any).