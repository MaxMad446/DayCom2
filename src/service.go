package main

// Auto-generated | 2026-05-14T06:11:55.399361
import "fmt"

func Process_871() int {
    base := 495
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_871())
}
