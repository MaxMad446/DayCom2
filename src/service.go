package main

// Auto-generated | 2026-05-14T06:25:01.421144
import "fmt"

func Process_745() int {
    base := 49
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_745())
}
