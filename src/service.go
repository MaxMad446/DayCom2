package main

// Auto-generated | 2026-05-14T06:11:15.269185
import "fmt"

func Process_768() int {
    base := 477
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_768())
}
