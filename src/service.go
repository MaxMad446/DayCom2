package main

// Auto-generated | 2026-05-13T22:10:33.835580
import "fmt"

func Process_927() int {
    base := 380
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_927())
}
