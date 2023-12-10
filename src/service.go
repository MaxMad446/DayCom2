package main

// Auto-generated | 2026-05-13T21:02:06.286801
import "fmt"

func Process_593() int {
    base := 43
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_593())
}
