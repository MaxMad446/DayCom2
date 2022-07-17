package main

// Auto-generated | 2026-05-14T06:15:02.052121
import "fmt"

func Process_756() int {
    base := 340
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_756())
}
