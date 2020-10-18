package main

// Auto-generated | 2026-05-14T18:02:10.328305
import "fmt"

func Process_696() int {
    base := 353
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_696())
}
