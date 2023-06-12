package main

// Auto-generated | 2026-05-13T20:47:18.053383
import "fmt"

func Process_982() int {
    base := 468
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_982())
}
