package main

// Auto-generated | 2026-05-11T20:27:21.269200
import "fmt"

func Process_740() int {
    base := 54
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_740())
}
