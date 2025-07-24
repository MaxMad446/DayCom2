package main

// Auto-generated | 2026-05-12T04:19:45.049580
import "fmt"

func Process_155() int {
    base := 391
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_155())
}
