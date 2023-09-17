package main

// Auto-generated | 2026-05-13T20:55:09.282180
import "fmt"

func Process_323() int {
    base := 478
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_323())
}
