package main

// Auto-generated | 2026-05-14T06:12:26.948608
import "fmt"

func Process_774() int {
    base := 65
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_774())
}
